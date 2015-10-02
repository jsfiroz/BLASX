#ifndef BLASX_CONFIG_H
#define BLASX_CONFIG_H

#define BLASX_GPU_ENABLED
#define BLASX_CUBLAS_ENABLED
#define BLASX_CUBLASXT_ENABLED

//Function Thresholds
/*---------LEVEL1&2-----------*/
//At this release, level 1,2 rountines
//are default to offload to cpu
/*-----------LEVEL3-----------*/
/*******GEMM*******/

#define SGEMM_BLAS_THRESHOLD -100
#define SGEMM_CUBLAS_THRESHOLD 1000
#define SGEMM_CUBLASXT_THRESHOLD 

#define DGEMM_BLAS_THRESHOLD -100
#define DGEMM_CUBLAS_THRESHOLD -50
#define DGEMM_CUBLASXT_THRESHOLD 

#define CGEMM_BLAS_THRESHOLD -100
#define CGEMM_CUBLAS_THRESHOLD -50
#define CGEMM_CUBLASXT_THRESHOLD 

#define ZGEMM_BLAS_THRESHOLD -100
#define ZGEMM_CUBLAS_THRESHOLD -50
#define ZGEMM_CUBLASXT_THRESHOLD 

/*******HERK*******/
#define ZHERK_BLAS_THRESHOLD -100
#define ZHERK_CUBLAS_THRESHOLD -50
#define ZHERK_CUBLASXT_THRESHOLD 

#define CHERK_BLAS_THRESHOLD -100
#define CHERK_CUBLAS_THRESHOLD -50
#define CHERK_CUBLASXT_THRESHOLD 

/*******HER2K******/

#define ZHER2K_BLAS_THRESHOLD -100
#define ZHER2K_CUBLAS_THRESHOLD -50
#define ZHER2K_CUBLASXT_THRESHOLD 

#define CHER2K_BLAS_THRESHOLD -100
#define CHER2K_CUBLAS_THRESHOLD -50
#define CHER2K_CUBLASXT_THRESHOLD 

/*******HEMM*******/
#define ZHEMM_BLAS_THRESHOLD -100
#define ZHEMM_CUBLAS_THRESHOLD -50
#define ZHEMM_CUBLASXT_THRESHOLD 

#define CHEMM_BLAS_THRESHOLD -100
#define CHEMM_CUBLAS_THRESHOLD -50
#define CHEMM_CUBLASXT_THRESHOLD 

/*******SYMM*******/
#define SSYMM_BLAS_THRESHOLD -100
#define SSYMM_CUBLAS_THRESHOLD 1000
#define SSYMM_CUBLASXT_THRESHOLD 

#define DSYMM_BLAS_THRESHOLD -100
#define DSYMM_CUBLAS_THRESHOLD -50
#define DSYMM_CUBLASXT_THRESHOLD 

#define CSYMM_BLAS_THRESHOLD -100
#define CSYMM_CUBLAS_THRESHOLD -50
#define CSYMM_CUBLASXT_THRESHOLD 

#define ZSYMM_BLAS_THRESHOLD -100
#define ZSYMM_CUBLAS_THRESHOLD -50
#define ZSYMM_CUBLASXT_THRESHOLD 

/*******SYRK*******/

#define SSYRK_BLAS_THRESHOLD -100
#define SSYRK_CUBLAS_THRESHOLD 1000
#define SSYRK_CUBLASXT_THRESHOLD 

#define DSYRK_BLAS_THRESHOLD -100
#define DSYRK_CUBLAS_THRESHOLD -50
#define DSYRK_CUBLASXT_THRESHOLD 

#define CSYRK_BLAS_THRESHOLD -100
#define CSYRK_CUBLAS_THRESHOLD -50
#define CSYRK_CUBLASXT_THRESHOLD 

#define ZSYRK_BLAS_THRESHOLD -100
#define ZSYRK_CUBLAS_THRESHOLD -50
#define ZSYRK_CUBLASXT_THRESHOLD 

/*******SYR2K*******/
#define SSYR2K_BLAS_THRESHOLD -100
#define SSYR2K_CUBLAS_THRESHOLD 1000
#define SSYR2K_CUBLASXT_THRESHOLD 

#define DSYR2K_BLAS_THRESHOLD -100
#define DSYR2K_CUBLAS_THRESHOLD -50
#define DSYR2K_CUBLASXT_THRESHOLD 

#define CSYR2K_BLAS_THRESHOLD -100
#define CSYR2K_CUBLAS_THRESHOLD -50
#define CSYR2K_CUBLASXT_THRESHOLD 

#define ZSYR2K_BLAS_THRESHOLD -100
#define ZSYR2K_CUBLAS_THRESHOLD -50
#define ZSYR2K_CUBLASXT_THRESHOLD 

/*******TRMM*******/
#define STRMM_BLAS_THRESHOLD -100
#define STRMM_CUBLAS_THRESHOLD 1000
#define STRMM_CUBLASXT_THRESHOLD 

#define DTRMM_BLAS_THRESHOLD -100
#define DTRMM_CUBLAS_THRESHOLD -50
#define DTRMM_CUBLASXT_THRESHOLD 

#define CTRMM_BLAS_THRESHOLD -100
#define CTRMM_CUBLAS_THRESHOLD -50
#define CTRMM_CUBLASXT_THRESHOLD 

#define ZTRMM_BLAS_THRESHOLD -100
#define ZTRMM_CUBLAS_THRESHOLD -50
#define ZTRMM_CUBLASXT_THRESHOLD 

/*******TRSM*******/
#define STRSM_BLAS_THRESHOLD -100
#define STRSM_CUBLAS_THRESHOLD 1000
#define STRSM_CUBLASXT_THRESHOLD 

#define DTRSM_BLAS_THRESHOLD -100
#define DTRSM_CUBLAS_THRESHOLD -50
#define DTRSM_CUBLASXT_THRESHOLD 

#define CTRSM_BLAS_THRESHOLD -100
#define CTRSM_CUBLAS_THRESHOLD -50
#define CTRSM_CUBLASXT_THRESHOLD 

#define ZTRSM_BLAS_THRESHOLD -100
#define ZTRSM_CUBLAS_THRESHOLD -50
#define ZTRSM_CUBLASXT_THRESHOLD 


#endif /* BLASX_CONFIG_H */
