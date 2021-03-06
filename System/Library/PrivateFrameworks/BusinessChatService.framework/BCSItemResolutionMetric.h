/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BusinessChatService/BCSMetric.h>
#import <libobjc.A.dylib/BCSCoreAnalyticsEventDescribing.h>
#import <libobjc.A.dylib/BCSItemIdentifierProviding.h>
#import <libobjc.A.dylib/BCSResolutionMetricProtocol.h>

@class BCSFlagMeasurement, BCSTimingMeasurement, NSString, NSDictionary;

@interface BCSItemResolutionMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSItemIdentifierProviding, BCSResolutionMetricProtocol> {

	BOOL errorEncountered;
	BCSFlagMeasurement* cacheHitMeasurement;
	BCSTimingMeasurement* timingMeasurement;

}

@property (nonatomic,readonly) NSString * coreAnalyticsEventName; 
@property (nonatomic,readonly) NSDictionary * coreAnalyticsPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<BCSItemIdentifying> itemIdentifier; 
@property (assign,nonatomic) BOOL errorEncountered; 
@property (nonatomic,retain) BCSTimingMeasurement * timingMeasurement; 
@property (nonatomic,retain) BCSFlagMeasurement * cacheHitMeasurement; 
+(id)metricForItemIdentifier:(id)arg1 postProcessingMetricHandlers:(id)arg2 ;
-(id<BCSItemIdentifying>)itemIdentifier;
-(void)setCacheHitMeasurement:(BCSFlagMeasurement *)arg1 ;
-(BCSFlagMeasurement *)cacheHitMeasurement;
-(NSString *)coreAnalyticsEventName;
-(NSDictionary *)coreAnalyticsPayload;
-(void)setTimingMeasurement:(BCSTimingMeasurement *)arg1 ;
-(BCSTimingMeasurement *)timingMeasurement;
-(void)setErrorEncountered:(BOOL)arg1 ;
-(BOOL)errorEncountered;
@end

