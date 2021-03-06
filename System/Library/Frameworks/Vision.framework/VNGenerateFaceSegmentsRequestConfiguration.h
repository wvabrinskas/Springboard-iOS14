/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNGenerateFaceSegmentsRequestConfiguration : VNImageBasedRequestConfiguration {

	float _faceBoundingBoxExpansionRatio;

}

@property (assign,nonatomic) float faceBoundingBoxExpansionRatio; 
+(BOOL)expansionRatioWithinValidRange:(float)arg1 ;
+(float)defaultFaceBoundingBoxExpansionRatio;
+(float)beginRangeFaceBoundingBoxExpansionRatio;
+(float)endRangeFaceBoundingBoxExpansionRatio;
-(void)setFaceBoundingBoxExpansionRatio:(float)arg1 ;
-(float)faceBoundingBoxExpansionRatio;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
@end

