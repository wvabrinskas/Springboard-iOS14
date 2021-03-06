/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMLFeatureProvider.h>

@class NSSet, REFeatureMap, NSString;

@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider> {

	REFeatureMap* _featureMap;

}

@property (nonatomic,readonly) NSSet * allFeatures; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)valueForFeature:(id)arg1 ;
-(NSSet *)allFeatures;
-(id)initWithFeatureMap:(id)arg1 ;
@end

