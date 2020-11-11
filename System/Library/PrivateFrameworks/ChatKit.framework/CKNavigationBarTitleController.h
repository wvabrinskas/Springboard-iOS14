/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKNavigationBarTitleControllerDelegate;
@class CKConversation, CKAvatarPickerViewController, _UINavigationBarTitleView, NSArray, UIBarButtonItem;

@interface CKNavigationBarTitleController : NSObject {

	BOOL _editing;
	CKConversation* _conversation;
	CKAvatarPickerViewController* _avatarPickerViewController;
	_UINavigationBarTitleView* _titleView;
	id<CKNavigationBarTitleControllerDelegate> _delegate;

}

@property (nonatomic,readonly) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) CKAvatarPickerViewController * avatarPickerViewController;              //@synthesize avatarPickerViewController=_avatarPickerViewController - In the implementation block
@property (nonatomic,readonly) _UINavigationBarTitleView * titleView;                                  //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) NSArray * leftBarButtonItems; 
@property (nonatomic,readonly) NSArray * rightBarButtonItems; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                            //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * cancelBarButtonItem; 
@property (nonatomic,readonly) UIBarButtonItem * deleteAllBarButtonItem; 
@property (assign,nonatomic,__weak) id<CKNavigationBarTitleControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(id<CKNavigationBarTitleControllerDelegate>)delegate;
-(CKConversation *)conversation;
-(_UINavigationBarTitleView *)titleView;
-(CKAvatarPickerViewController *)avatarPickerViewController;
-(void)setDelegate:(id<CKNavigationBarTitleControllerDelegate>)arg1 ;
-(void)_pressedAvatarView;
-(UIBarButtonItem *)deleteAllBarButtonItem;
-(void)_deleteAllBarButtonItemPressed;
-(void)_editCancelButtonPressed;
-(id)initWithConversation:(id)arg1 ;
-(id)_conversationList;
-(BOOL)isEditing;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
-(UIBarButtonItem *)cancelBarButtonItem;
-(void)setEditing:(BOOL)arg1 ;
@end
