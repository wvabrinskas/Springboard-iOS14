/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABColor : NSObject
+(int)readSystemColorID:(int)arg1 ;
+(EshColor)propertyColor:(int)arg1 colorPropertiesManager:(id)arg2 ;
+(id)readColor:(const EshColor*)arg1 colorPropertiesManager:(id)arg2 state:(id)arg3 ;
+(int)readColorAdjustmentType:(int)arg1 ;
+(int)writeSystemColorID:(int)arg1 ;
@end
