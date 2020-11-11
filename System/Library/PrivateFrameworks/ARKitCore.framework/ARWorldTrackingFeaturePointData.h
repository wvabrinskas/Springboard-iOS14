/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ARKitCore/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ARPointCloud, NSString;

@interface ARWorldTrackingFeaturePointData : NSObject <ARResultData, NSSecureCoding> {

	double _timestamp;
	ARPointCloud* _visionFeaturePoints;
	ARPointCloud* _featurePoints;

}

@property (nonatomic,readonly) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) ARPointCloud * visionFeaturePoints;              //@synthesize visionFeaturePoints=_visionFeaturePoints - In the implementation block
@property (nonatomic,retain) ARPointCloud * featurePoints;                    //@synthesize featurePoints=_featurePoints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(ARPointCloud *)featurePoints;
-(void)setVisionFeaturePoints:(ARPointCloud *)arg1 ;
-(void)setFeaturePoints:(ARPointCloud *)arg1 ;
-(ARPointCloud *)visionFeaturePoints;
@end
