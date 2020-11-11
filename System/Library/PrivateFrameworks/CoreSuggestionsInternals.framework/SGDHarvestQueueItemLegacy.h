/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsInternals/SGDHarvestQueueItem.h>

@class SGDWorkQueueItem;

@interface SGDHarvestQueueItemLegacy : SGDHarvestQueueItem {

	SGDWorkQueueItem* _workQueueItem;
	BOOL _highPriority;

}
-(BOOL)highPriority;
-(void)finish;
-(void)markAsFailed;
-(id)description;
-(void)dealloc;
-(id)initWithWorkQueueItem:(id)arg1 item:(id)arg2 highPriority:(BOOL)arg3 customPriorityCritera:(unsigned char)arg4 ;
@end
