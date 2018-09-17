<?php

function manu_magic_node_context($node) {
      $text = $node->body['und'][0]['value'];
      return [
      	'#type' => 'markup',
      	'#markup' => $text . ' code change',
      ];
}