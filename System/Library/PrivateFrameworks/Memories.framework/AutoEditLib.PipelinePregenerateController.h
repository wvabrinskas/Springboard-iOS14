/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface AutoEditLib.PipelinePregenerateController : NSObject {

	 collection;
	 memory;
	 memoryPublisherOutput;
	 blueprint;
	 picklistPublisherOutput;
	 durationRangeOutput;
	 token;
	 secondToken;

}
-(id)init;
-(void)cancel;
-(id)initWithCollection:(id)arg1 memory:(id)arg2 ;
-(void)receiveWithRequestedDuration:(double)arg1 requestedKeyAsset:(id)arg2 requestedBlueprint:(id)arg3 requestedSuggestions:(id)arg4 naturalSize:(CGSize)arg5 queue:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end

