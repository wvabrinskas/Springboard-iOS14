/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable;
@interface _CNOnEmptyObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _nextObservable;
	BOOL _observableIsEmpty;

}

@property (nonatomic,retain) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
-(id<CNObservable>)observable;
-(void)setObservable:(id<CNObservable>)arg1 ;
-(id)subscribe:(id)arg1 ;
-(BOOL)isObservableEmpty;
-(void)observableDidSendResult;
-(id)subscribeNextObservable:(id)arg1 ;
-(id)initWithObservable:(id)arg1 nextObservable:(id)arg2 ;
@end

