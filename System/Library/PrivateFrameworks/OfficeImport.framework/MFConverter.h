/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface MFConverter : NSObject
+(id)play:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
+(CGRect)boundsInPoints:(id)arg1 ;
+(BOOL)mapToPdf:(id)arg1 ;
+(id)playToPDF:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
+(id)playToBitmap:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
+(CGRect)boundsInLogicalUnits:(id)arg1 ;
+(void)fromBinary:(id)arg1 toXml:(id)arg2 ;
+(void)playInCurrentContext:(id)arg1 frame:(CGRect)arg2 colorMap:(id)arg3 fillMap:(id)arg4 ;
@end
