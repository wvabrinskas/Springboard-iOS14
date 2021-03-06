/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSOrderedSet;

@interface NMSMediaDownloadInfo : NSObject {

	NSOrderedSet* _items;

}

@property (nonatomic,readonly) NSOrderedSet * items;              //@synthesize items=_items - In the implementation block
-(id)initWithItems:(id)arg1 ;
-(id)description;
-(NSOrderedSet *)items;
-(void)enumerateMediaItemsUsingBlock:(/*^block*/id)arg1 ;
-(id)mediaItemIdentifiers;
@end

