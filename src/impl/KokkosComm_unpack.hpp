#pragma once

#include <Kokkos_Core.hpp>

// impl
#include "KokkosComm_packtraits.hpp" 

template <typename Dst, typename Src, typename ExecSpace>
void unpack(const ExecSpace &space, const Dst &dst, const Src &src) {
    Kokkos::Tools::pushRegion("KokkosComm::unpack");
    Kokkos::deep_copy(space, dst, src);
    Kokkos::Tools::popRegion();
}