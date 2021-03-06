/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _SCRCStackNode : NSObject {

	id _object;
	_SCRCStackNode* _prev;
	_SCRCStackNode* _next;

}

@property (nonatomic,retain) id object;                                 //@synthesize object=_object - In the implementation block
@property (assign,nonatomic,__weak) _SCRCStackNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (nonatomic,retain) _SCRCStackNode * next;                     //@synthesize next=_next - In the implementation block
-(_SCRCStackNode *)next;
-(_SCRCStackNode *)prev;
-(void)setPrev:(_SCRCStackNode *)arg1 ;
-(void)setObject:(id)arg1 ;
-(void)setNext:(_SCRCStackNode *)arg1 ;
-(id)object;
@end

