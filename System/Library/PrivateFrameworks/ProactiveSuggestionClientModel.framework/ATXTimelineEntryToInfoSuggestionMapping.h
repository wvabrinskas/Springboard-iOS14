/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, ATXInfoTimelineEntry;

@interface ATXTimelineEntryToInfoSuggestionMapping : NSObject {

	NSString* _suggestionId;
	ATXInfoTimelineEntry* _timelineEntry;
	long long _suggestionMappingReason;

}

@property (nonatomic,readonly) NSString * suggestionId;                           //@synthesize suggestionId=_suggestionId - In the implementation block
@property (nonatomic,readonly) ATXInfoTimelineEntry * timelineEntry;              //@synthesize timelineEntry=_timelineEntry - In the implementation block
@property (nonatomic,readonly) long long suggestionMappingReason;                 //@synthesize suggestionMappingReason=_suggestionMappingReason - In the implementation block
+(id)entryMappingWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3 ;
-(id)init;
-(NSString *)suggestionId;
-(id)initWithTimelineEntry:(id)arg1 suggestionId:(id)arg2 withSuggestionMappingReason:(long long)arg3 ;
-(ATXInfoTimelineEntry *)timelineEntry;
-(long long)suggestionMappingReason;
@end

