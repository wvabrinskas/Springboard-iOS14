/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDHarvestQueueInMemory, NSString;

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem {

	BOOL _highPriority;
	SGDHarvestQueueInMemory* _parentQueue;
	BOOL _inProgress;
	BOOL _beingDeleted;
	NSString* _sourceKey;
	NSString* _messageId;

}

@property (nonatomic,readonly) NSString * sourceKey;              //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (assign) BOOL inProgress;                               //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) BOOL beingDeleted;                             //@synthesize beingDeleted=_beingDeleted - In the implementation block
-(BOOL)highPriority;
-(void)finish;
-(BOOL)inProgress;
-(void)markAsFailed;
-(id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(BOOL)arg6 customPriorityCriteria:(unsigned char)arg7 parentQueue:(id)arg8 ;
-(void)setInProgress:(BOOL)arg1 ;
-(NSString *)sourceKey;
-(id)description;
-(void)setBeingDeleted:(BOOL)arg1 ;
-(BOOL)beingDeleted;
-(NSString *)messageId;
@end
