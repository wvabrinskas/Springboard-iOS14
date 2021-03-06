/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/AdditionalInfoProtocol.h>

@class NSString, NSMutableDictionary, NSDate;

@interface RedirectHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, AdditionalInfoProtocol> {

	NSString* _originalURLKey;
	NSString* _redirectURLKey;
	unsigned _ignoreFor;
	unsigned _maxCount;
	double _maxAge;
	NSMutableDictionary* _ignoredDestinations;
	unsigned _numIgnored;
	double _numIgnoredScaleFactor;
	NSString* _currentRedirectURL;
	NSMutableDictionary* _redirectedOrigins;
	NSMutableDictionary* _requestingPids;
	NSDate* _pruningTime;
	unsigned _numNegatives;
	id _resetObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)noteSymptom:(id)arg1 ;
+(id)generateAdditionalInfo:(id)arg1 ;
+(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
+(id)configureClass:(id)arg1 ;
+(id)_sharedInstance;
-(void)_prune;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)generateAdditionalInfo:(id)arg1 ;
-(void)_reset:(id)arg1 ;
-(id)init;
-(int)configureInstance:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
-(NSString *)description;
-(void)performNegativeFeedback:(id)arg1 ;
-(void)_pruneDir:(id)arg1 ;
-(void)_addRedirectFrom:(id)arg1 To:(id)arg2 by:(unsigned long long)arg3 atTime:(unsigned)arg4 ;
@end

