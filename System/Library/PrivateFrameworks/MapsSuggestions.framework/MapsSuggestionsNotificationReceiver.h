/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MapsSuggestions/MapsSuggestions-Structs.h>
@interface MapsSuggestionsNotificationReceiver : NSObject {

	unique_ptr<MSg::NotificationReceiver, std::__1::default_delete<MSg::NotificationReceiver> >* _receiver;

}
-(void)dealloc;
-(id)initWithDarwinNotification:(const char*)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithDarwinNotification:(const char*)arg1 block:(/*^block*/id)arg2 ;
@end

