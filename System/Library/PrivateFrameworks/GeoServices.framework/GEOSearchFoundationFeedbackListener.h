/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class NSArray, NSString;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {

	int _uiTarget;
	NSArray* _sections;
	NSArray* _resultCardSections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedbackListenerForParsec;
-(id)traits;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(id)init;
-(void)didEngageResult:(id)arg1 ;
-(void)didEngageSection:(id)arg1 ;
-(id)initWithClientType:(unsigned long long)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageCardSection:(id)arg1 ;
-(void)cardViewDidAppear:(id)arg1 ;
@end
