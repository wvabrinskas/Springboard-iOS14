/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProxCardKit.framework/ProxCardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage, UIColor, UISwitch;

@interface PRXFeature : NSObject {

	BOOL _on;
	NSString* _title;
	NSString* _detailText;
	UIImage* _icon;
	UIColor* _tintColor;
	/*^block*/id _handler;
	UISwitch* _switchControl;

}

@property (nonatomic,readonly) id handler;                                 //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic,__weak) UISwitch * switchControl;              //@synthesize switchControl=_switchControl - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;                 //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                        //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                          //@synthesize on=_on - In the implementation block
+(id)optionalFeatureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
+(id)featureWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(UIImage *)icon;
-(void)setSwitchControl:(UISwitch *)arg1 ;
-(NSString *)title;
-(UIColor *)tintColor;
-(NSString *)detailText;
-(id)handler;
-(UISwitch *)switchControl;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 tintColor:(id)arg4 valueChangedBlock:(/*^block*/id)arg5 ;
@end
