/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXComponentViewEngine.h>

@protocol SXComponentViewEngine <NSObject>
@required
-(void)addFactory:(id)arg1;
-(void)addFactory:(id)arg1;
-(id)componentViewForComponent:(id)arg1;
-(id)componentViewForComponent:(id)arg1;
-(void)removeFactory:(id)arg1;
-(void)removeFactory:(id)arg1;

@end


@protocol SXComponentViewPostProcessorManager;
@class SXComponentTypeMatching, NSString;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine> {

	SXComponentTypeMatching* _factoryMatching;
	id<SXComponentViewPostProcessorManager> _postProcessorManager;

}

@property (nonatomic,readonly) SXComponentTypeMatching * factoryMatching;                                 //@synthesize factoryMatching=_factoryMatching - In the implementation block
@property (nonatomic,readonly) id<SXComponentViewPostProcessorManager> postProcessorManager;              //@synthesize postProcessorManager=_postProcessorManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPostProcessorManager:(id)arg1 ;
-(void)addFactory:(id)arg1 ;
-(id)componentViewForComponent:(id)arg1 ;
-(void)removeFactory:(id)arg1 ;
-(id<SXComponentViewPostProcessorManager>)postProcessorManager;
-(SXComponentTypeMatching *)factoryMatching;
@end

