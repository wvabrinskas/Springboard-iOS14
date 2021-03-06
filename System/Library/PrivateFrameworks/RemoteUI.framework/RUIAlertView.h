/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RUIElement.h>

@protocol RUIPresentationHandling, RUIAlertViewDelegate;
@class UIAlertController, RUIObjectModel, NSString;

@interface RUIAlertView : RUIElement {

	UIAlertController* _alertController;
	id<RUIPresentationHandling> _presentationContext;
	RUIObjectModel*<RUIAlertViewDelegate> _objectModel;
	NSString* _title;
	NSString* _message;
	long long _buttonIndex;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                                           //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel*<RUIAlertViewDelegate> objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long buttonIndex;                                               //@synthesize buttonIndex=_buttonIndex - In the implementation block
+(void)_enableTestMode;
-(id)alertController;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(long long)buttonIndex;
-(id)completion;
-(NSString *)message;
-(void)_dismissAlertController;
-(RUIObjectModel*<RUIAlertViewDelegate>)objectModel;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)dealloc;
-(void)setObjectModel:(RUIObjectModel*<RUIAlertViewDelegate>)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)runAlertInController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 URL:(id)arg2 style:(long long)arg3 attributes:(id)arg4 ;
@end

