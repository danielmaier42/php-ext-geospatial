<?php

/**
 * @generate-class-entries
 */

namespace
{
    function rdp_simplify(
        array $coordinates,
        float $epsilon = 0.1,
    ): array {}
}

namespace Geospatial\GeoJSON
{
    final class LineString implements \Countable
    {
        private readonly array $points;

        public function __construct(
            array $points,
        ) {}

        public function getPoints(): array {}

        public function simplify(
            float $epsilon = 0.1,
        ): LineString {}

        public function count(): int {}
    }
}
