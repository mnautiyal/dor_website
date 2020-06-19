<?php

/**
 * @file
 * A simple demo to show how to use webspeech module.
 */

/**
 * Form to show a simple demo.
 */
function webspeech_demo_simple() {
  drupal_set_title(t('WebSpeech Simple Demo'));

  if (!webspeech_initialize()) {
    return '<p>Fail to initialize WebSpeech.</p>';
  }

  drupal_add_js("
    function helloWorld() {
      WebSpeech.setVoice('en');
      WebSpeech.speak('hello world');
    }

    function gutenTag() {
      WebSpeech.setVoice('de+f2');
      WebSpeech.setSpeedDelta(50);
      WebSpeech.speak('Guten Tag');
    }
    
    function one23() {
      WebSpeech.setVoice('Cantonese');
      WebSpeech.speak('123');
    }", 'inline');

  return '<button onclick="helloWorld();">hello world</button>
      <button onclick="gutenTag();">Guten Tag (female voice with 50% faster)</button>
      <button onclick="one23();">123 (in Cantonese)</button><br/>' .
      l(t('(Configure WebSpeech)'), 'admin/config/services/webspeech');
}
