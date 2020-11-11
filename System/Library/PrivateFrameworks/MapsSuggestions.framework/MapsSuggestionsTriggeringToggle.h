/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSuggestions/MapsSuggestionsBaseTrigger.h>
#import <MapsSuggestions/MapsSuggestionsTrigger.h>
#import <MapsSuggestions/MapsSuggestionsRunCondition.h>

@class NSString;

@interface MapsSuggestionsTriggeringToggle : MapsSuggestionsBaseTrigger <MapsSuggestionsTrigger, MapsSuggestionsRunCondition> {

	unsigned long long _behavior;
	BOOL _state;
	unsigned long long _timesUpdated;

}

@property (assign,nonatomic) BOOL state; 
@property (nonatomic,readonly) unsigned long long timesUpdated; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRun;
-(void)setState:(BOOL)arg1 ;
-(BOOL)state;
-(id)initWithName:(id)arg1 ;
-(id)objectForJSON;
-(void)didAddFirstObserver;
-(void)didRemoveLastObserver;
-(unsigned long long)timesUpdated;
-(id)initWithName:(id)arg1 behavior:(unsigned long long)arg2 ;
@end
