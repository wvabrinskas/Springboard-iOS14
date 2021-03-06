/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NUImageGeometry;

@interface PICompositionExportResult : NSObject {

	NUImageGeometry* _geometry;
	SCD_Struct_PI5 _inputSize;

}

@property (retain) NUImageGeometry * geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (assign) SCD_Struct_PI5 inputSize;                //@synthesize inputSize=_inputSize - In the implementation block
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(SCD_Struct_PI5)inputSize;
-(void)setInputSize:(SCD_Struct_PI5)arg1 ;
-(NUImageGeometry *)geometry;
@end

