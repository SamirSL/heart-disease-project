GENCCODE_ASSEMBLY_TYPE=-a gcc-darwin
SO=dylib
SOBJ=dylib
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.68.1.dylib
COMPILE=arm64-apple-darwin20.0.0-clang -DU_ATTRIBUTE_DEPRECATED= -D_FORTIFY_SOURCE=2 -isystem /Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/include -mmacosx-version-min=11.1   -DU_HAVE_STRTOD_L=1 -DU_HAVE_XLOCALE_H=1 -DU_HAVE_STRING_VIEW=1  -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -isystem /Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/include -fdebug-prefix-map=/Users/ktietz/demo/mc3/conda-bld/icu_1630597441882/work=/usr/local/src/conda/icu-68.1 -fdebug-prefix-map=/Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -fno-common -c
LIBFLAGS=-I/Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/include  -dynamic
GENLIB=arm64-apple-darwin20.0.0-clang -dynamiclib -dynamic -ftree-vectorize -fPIC -fPIE -fstack-protector-strong -O2 -pipe -isystem /Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/include -fdebug-prefix-map=/Users/ktietz/demo/mc3/conda-bld/icu_1630597441882/work=/usr/local/src/conda/icu-68.1 -fdebug-prefix-map=/Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1=/usr/local/src/conda-prefix -std=c11 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-pie -Wl,-headerpad_max_install_names -Wl,-dead_strip_dylibs -Wl,-rpath,/Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/lib -L/Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/lib -Wl,-rpath,/Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/lib 
LDICUDTFLAGS=
LD_SONAME=-Wl,-compatibility_version -Wl,68 -Wl,-current_version -Wl,68.1 -install_name /Users/samir/Library/CloudStorage/OneDrive-Personal/Desktop/SAMIR/Machine Learning/Complete Machine Learning & Data Science Bootcamp 2023/heart-disease-project/project1/lib/
RPATH_FLAGS=
BIR_LDFLAGS=
AR=arm64-apple-darwin20.0.0-ar
ARFLAGS=r -c
RANLIB=arm64-apple-darwin20.0.0-ranlib
INSTALL_CMD=/usr/local/bin/ginstall -c
