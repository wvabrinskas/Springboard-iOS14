/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface SSXPCServerObserver : NSObject {

	id _observer;
	SEL _selector;

}

@property (assign,nonatomic) id observer;               //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) SEL selector;              //@synthesize selector=_selector - In the implementation block
-(void)setSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(void)setObserver:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SEL)selector;
-(id)observer;
@end
