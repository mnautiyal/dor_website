<?php

/**
 * @file
 * A simple demo to show how to use webspeech module.
 */

/**
 * Form to show HTML demo.
 */
function webspeech_demo_html() {
  drupal_set_title(t('WebSpeech HTML Demo'));

  if (!webspeech_initialize()) {
    return '<p>Fail to initialize WebSpeech.</p>';
  }

  drupal_add_js("
    function demoSideSpr(elem) {
      if (typeof WebSpeech === 'undefined') {
        return;
      }

      var value = elem.innerHTML;
      if (value === 'Read HTML Tree') {
        WebSpeech.speakHtml('speech-content');
        elem.innerHTML = 'Pause';
        WebSpeech.onfinish = function () {
          document.getElementById('demoSideSprButton').innerHTML = 'Read HTML Tree';
        }
      }
      else if (value === 'Pause') {
        WebSpeech.pauseHtml();
        elem.innerHTML = 'Resume';
      }
      else if (value === 'Resume') {
        WebSpeech.resumeHtml();
        elem.innerHTML = 'Pause';
      }
    }

    function demoSideStop() {
      if (typeof WebSpeech !== 'undefined') {
        WebSpeech.stopHtml();
        document.getElementById('demoSideSprButton').innerHTML = 'Read HTML Tree';
     }
    }", 'inline');

  return "<button id='demoSideSprButton' onclick='demoSideSpr(this)'>Read HTML Tree</button>
    <button id='sideStopButton' onclick='demoSideStop()'>Stop</button>
    <div id='speech-content'>
      <p>This module add text-to-speech function to the website through WebSpeech.</p>
      <p>WebSpeech is a free javascript library for web developers who want to write pages with voice.
      It relies on a Web TTS server in the backend.
      The default one http://wa.eguidedog.net is free for limited bandwidth usage.
      If you want to have better service, please contact Cameron Wong.
      You can also setup the Web TTS server yourself.
      All the softwares we used are free.</p>
      <p>Author: Cameron Wong (hgneng at yahoo.com.cn)</p>
      <p>Website: <a href='http://www.eguidedog.net/WebSpeech.php'>
      http://www.eguidedog.net/WebSpeech.php</a></p>
    </div>" . l(t('(Configure WebSpeech)'), 'admin/config/services/webspeech');
}
