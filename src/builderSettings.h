//
//  builderSettings.h
//  Uray
//
//  Created by 杨丰 on 2019/10/16.
//  Copyright © 2019 杨丰. All rights reserved.
//

#ifndef builderSettings_h
#define builderSettings_h


#define PBRT_HAVE_ALLOCA_H

#define PBRT_HAVE_MEMORY_H

#define PBRT_HAVE_HEX_FP_CONSTANTS

#define PBRT_HAVE_BINARY_CONSTANTS

#define PBRT_CONSTEXPR constexpr

#define PBRT_HAVE_ITIMER

#define PBRT_HAVE_MMAP

#define PBRT_NOINLINE __attribute__((noinline))

#define PBRT_HAVE_POSIX_MEMALIGN

#define PBRT_THREAD_LOCAL __thread

#define PBRT_HAVE_CONSTEXPR

#endif /* builderSettings_h */
