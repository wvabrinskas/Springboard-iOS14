/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSMutableDictionary, NSDictionary, NSString, SSDialogButton;

@interface SSDialog : NSObject {

	NSArray* _buttons;
	NSMutableDictionary* _dialogDictionary;

}

@property (nonatomic,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,readonly) NSString * dialogKind; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) SSDialogButton * defaultButton; 
-(void)setMessage:(NSString *)arg1 ;
-(id)init;
-(NSArray *)buttons;
-(NSString *)message;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)title;
-(NSDictionary *)dialogDictionary;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)dialogKind;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)initWithDialogDictionary:(id)arg1 ;
-(SSDialogButton *)defaultButton;
-(void)setDefaultButton:(SSDialogButton *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)dealloc;
@end
