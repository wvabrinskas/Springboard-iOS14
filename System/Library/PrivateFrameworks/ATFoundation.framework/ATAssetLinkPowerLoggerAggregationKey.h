/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ATFoundation/ATFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ATAssetLinkPowerLoggerAggregationKey : NSObject <NSCopying> {

	long long _linkType;
	NSString* _dataclass;
	NSString* _assetType;

}

@property (readonly) long long linkType;                //@synthesize linkType=_linkType - In the implementation block
@property (readonly) NSString * dataclass;              //@synthesize dataclass=_dataclass - In the implementation block
@property (readonly) NSString * assetType;              //@synthesize assetType=_assetType - In the implementation block
-(NSString *)assetType;
-(long long)linkType;
-(unsigned long long)hash;
-(NSString *)dataclass;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLinkType:(long long)arg1 dataclass:(id)arg2 assetType:(id)arg3 ;
@end
