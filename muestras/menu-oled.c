/*
 * Animación del menú OLED por tiempo transcurrido
 * C · STM32 · interfaz de usuario
 *
 * Copyright (c) 2026 Lorhan Fernandes Ribeiro.
 * Todos los derechos reservados. Consulta las condiciones en ../LICENSE.md.
 * Muestra para la evaluación de mi perfil profesional.
 *
 * Fragmento de mi proyecto: display.c.
 * Extracto del cuerpo de display_task(); requiere el contexto del proyecto.
 */

    if ((current_menu == DISPLAY_MENU_BRANDS) && scroll_active)
    {
        /* Calculo el avance a partir del tiempo transcurrido. */
        uint32_t elapsed = HAL_GetTick() - scroll_start_ms;
        uint8_t offset;

        if (elapsed >= DISPLAY_ANIMATION_MS)
        {
            scroll_active = 0u;
            scroll_last_offset = 0xFFu;
            display_dirty = 1u;
        }
        else
        {
            offset = (uint8_t)((elapsed * DISPLAY_LINE_HEIGHT) /
                               DISPLAY_ANIMATION_MS);
            /* Redibujo el fotograma solo cuando cambia el desplazamiento. */
            if (offset != scroll_last_offset)
            {
                scroll_last_offset = offset;
                draw_menu_brands_frame(scroll_from_brand, offset);
            }
            return;
        }
    }
