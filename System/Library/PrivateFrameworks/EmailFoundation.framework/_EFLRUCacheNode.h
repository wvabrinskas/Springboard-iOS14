/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _EFLRUCacheNode : NSObject {

	id _element;
	id _key;
	_EFLRUCacheNode* _previous;
	_EFLRUCacheNode* _next;

}

@property (nonatomic,readonly) id element;                            //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) id key;                                //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * previous;              //@synthesize previous=_previous - In the implementation block
@property (nonatomic,retain) _EFLRUCacheNode * next;                  //@synthesize next=_next - In the implementation block
-(_EFLRUCacheNode *)next;
-(id)key;
-(id)initWithKey:(id)arg1 element:(id)arg2 ;
-(void)setPrevious:(_EFLRUCacheNode *)arg1 ;
-(_EFLRUCacheNode *)previous;
-(void)setNext:(_EFLRUCacheNode *)arg1 ;
-(id)element;
@end

