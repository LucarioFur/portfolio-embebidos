/*
 * Ajuste de un valor a la anchura disponible en pantalla
 * C++ · ESP32 con Arduino · interfaz TFT
 *
 * Copyright (c) 2026 Lorhan Fernandes Ribeiro.
 * Todos los derechos reservados. Consulta las condiciones en ../LICENSE.md.
 * Muestra para la evaluación de mi perfil profesional.
 *
 * Fragmento de mi proyecto: IHM_ESP32_COMP.ino.
 * Requiere Arduino String y el objeto gráfico ui del proyecto.
 */

static String formatValue(float value, const char* unit, int decimals) {
    /* Limito la escritura al tamaño del búfer. */
    char buf[48];
    snprintf(buf, sizeof(buf), "%.*f %s", decimals, value, unit);
    String s(buf);
    s.trim();
    return s;
}

static bool fitValueText(float value, const char* unit, int maxWidth, int textSize, int maxDecimals, String& outText) {
    ui.setTextSize(textSize);
    /* Reduzco los decimales hasta que el texto cabe en la anchura indicada. */
    for (int dec = maxDecimals; dec >= 0; dec--) {
        outText = formatValue(value, unit, dec);
        if ((int)ui.textWidth(outText) <= maxWidth) return true;
    }
    outText = formatValue(value, unit, 0);
    return (int)ui.textWidth(outText) <= maxWidth;
}
