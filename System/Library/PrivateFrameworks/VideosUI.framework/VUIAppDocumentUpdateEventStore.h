/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSArray;

@interface VUIAppDocumentUpdateEventStore : NSObject {

	NSMutableDictionary* _eventByEventDescriptor;

}

@property (nonatomic,retain) NSMutableDictionary * eventByEventDescriptor;              //@synthesize eventByEventDescriptor=_eventByEventDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(void)removeAllEvents;
-(id)init;
-(void)removeEvent:(id)arg1 ;
-(NSArray *)events;
-(void)addEvents:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)description;
-(NSMutableDictionary *)eventByEventDescriptor;
-(void)setEventByEventDescriptor:(NSMutableDictionary *)arg1 ;
@end
