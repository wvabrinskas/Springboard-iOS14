/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, NSArray, NSFormatter;

@interface HUWheelControlPopUpButton : UIButton <HUControlView> {

	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	id _value;
	NSArray* _values;
	NSFormatter* _valueFormatter;

}

@property (nonatomic,retain) NSArray * values;                                       //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSFormatter * valueFormatter;                           //@synthesize valueFormatter=_valueFormatter - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value;                                               //@synthesize value=_value - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
-(id<HUControlViewDelegate>)delegate;
-(void)setValues:(NSArray *)arg1 ;
-(NSString *)identifier;
-(NSArray *)values;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(NSFormatter *)valueFormatter;
-(void)setValueFormatter:(NSFormatter *)arg1 ;
-(id)_createMenu;
@end

