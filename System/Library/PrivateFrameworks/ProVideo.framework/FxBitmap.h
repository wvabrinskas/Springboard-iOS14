/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxBitmap : FxImage <NSCopying> {

	FxBitmapPriv* _bitmapPriv;

}
+(void)setGuaranteeMemoryCallback:(/*function pointer*/void*)arg1 ;
-(void*)dataPtr;
-(id)init;
-(unsigned long long)rowBytes;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRowBytes:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)_verifyImage;
-(unsigned long long)_packedRowBytes;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 andData:(void*)arg2 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA83)arg2 andRowBytes:(unsigned long long)arg3 ;
-(id)initWithCopy:(id)arg1 ;
-(id)initWithInfo:(SCD_Struct_PA83)arg1 rowBytes:(unsigned long long)arg2 andData:(void*)arg3 ;
-(id)initWithCopy:(id)arg1 andInfo:(SCD_Struct_PA83)arg2 ;
-(void*)dataPtrForPositionX:(unsigned long long)arg1 Y:(unsigned long long)arg2 ;
-(BOOL)_ownsData;
-(void)_setOwnedDataPtr:(void*)arg1 ;
-(void)_setOwned:(BOOL)arg1 ;
@end
