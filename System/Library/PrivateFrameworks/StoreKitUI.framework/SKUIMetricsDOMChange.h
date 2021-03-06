/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SKUIMetricsDOMChange : NSObject <NSCopying> {

	BOOL _fromDeferredMessage;
	double _buildStartTime;
	double _buildEndTime;
	double _renderStartTime;
	double _renderEndTime;

}

@property (assign,nonatomic) double buildStartTime;                                              //@synthesize buildStartTime=_buildStartTime - In the implementation block
@property (assign,nonatomic) double buildEndTime;                                                //@synthesize buildEndTime=_buildEndTime - In the implementation block
@property (assign,nonatomic) double renderStartTime;                                             //@synthesize renderStartTime=_renderStartTime - In the implementation block
@property (assign,nonatomic) double renderEndTime;                                               //@synthesize renderEndTime=_renderEndTime - In the implementation block
@property (assign,getter=isFromDeferredMessage,nonatomic) BOOL fromDeferredMessage;              //@synthesize fromDeferredMessage=_fromDeferredMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(unsigned long long)hash;
-(NSDictionary *)dictionaryRepresentation;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)buildStartTime;
-(double)buildEndTime;
-(double)renderStartTime;
-(double)renderEndTime;
-(void)setBuildStartTime:(double)arg1 ;
-(void)setBuildEndTime:(double)arg1 ;
-(void)setFromDeferredMessage:(BOOL)arg1 ;
-(void)setRenderStartTime:(double)arg1 ;
-(void)setRenderEndTime:(double)arg1 ;
-(BOOL)isFromDeferredMessage;
-(id)initWithReportDomBuildTimesMessagePayload:(id)arg1 ;
@end

