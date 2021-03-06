/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSCore/MPSKernel.h>

@interface MPSMatrixBinaryKernel : MPSKernel {

	unsigned long long _batchStart;
	unsigned long long _batchSize;
	SCD_Struct_MP0 _primarySourceMatrixOrigin;
	SCD_Struct_MP0 _secondarySourceMatrixOrigin;
	SCD_Struct_MP0 _resultMatrixOrigin;

}

@property (assign,nonatomic) SCD_Struct_MP0 primarySourceMatrixOrigin;                //@synthesize primarySourceMatrixOrigin=_primarySourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 secondarySourceMatrixOrigin;              //@synthesize secondarySourceMatrixOrigin=_secondarySourceMatrixOrigin - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP0 resultMatrixOrigin;                       //@synthesize resultMatrixOrigin=_resultMatrixOrigin - In the implementation block
@property (assign,nonatomic) unsigned long long batchStart;                           //@synthesize batchStart=_batchStart - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                            //@synthesize batchSize=_batchSize - In the implementation block
-(unsigned long long)batchSize;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)batchStart;
-(void)setBatchStart:(unsigned long long)arg1 ;
-(void)setResultMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(SCD_Struct_MP0)primarySourceMatrixOrigin;
-(SCD_Struct_MP0)secondarySourceMatrixOrigin;
-(SCD_Struct_MP0)resultMatrixOrigin;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)setPrimarySourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
-(void)setSecondarySourceMatrixOrigin:(SCD_Struct_MP0)arg1 ;
@end

