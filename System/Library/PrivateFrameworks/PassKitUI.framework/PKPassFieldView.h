/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class PKPassField, PKPassFieldTemplate, PKPassColorProfile, PKDiffView, UILabel;

@interface PKPassFieldView : UIView {

	BOOL _needsRecalculation;
	CGSize _cachedSize;
	long long _background;
	PKPassField* _field;
	PKPassFieldTemplate* _fieldTemplate;
	PKPassColorProfile* _colorProfile;
	PKDiffView* _diffView;
	UILabel* _labelLabel;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) PKDiffView * diffView;                            //@synthesize diffView=_diffView - In the implementation block
@property (nonatomic,retain) PKPassField * field;                              //@synthesize field=_field - In the implementation block
@property (nonatomic,retain) PKPassFieldTemplate * fieldTemplate;              //@synthesize fieldTemplate=_fieldTemplate - In the implementation block
@property (nonatomic,retain) PKPassColorProfile * colorProfile;                //@synthesize colorProfile=_colorProfile - In the implementation block
@property (nonatomic,readonly) UILabel * labelLabel;                           //@synthesize labelLabel=_labelLabel - In the implementation block
@property (nonatomic,readonly) UILabel * valueLabel;                           //@synthesize valueLabel=_valueLabel - In the implementation block
+(id)newViewForField:(id)arg1 fieldTemplate:(id)arg2 ;
-(PKPassField *)field;
-(id)initWithField:(id)arg1 fieldTemplate:(id)arg2 ;
-(void)setColorProfile:(id)arg1 background:(long long)arg2 ;
-(BOOL)_shouldDisplayLabel;
-(id)_labelAttributedStringForColorProfile:(id)arg1 ;
-(id)_valueAttributedStringForColorProfile:(id)arg1 ;
-(CGSize)_resizeMultiLineValueFontForAvailableSize:(CGSize)arg1 ;
-(UILabel *)valueLabel;
-(void)setDiffView:(PKDiffView *)arg1 ;
-(void)setField:(PKPassField *)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKDiffView *)diffView;
-(PKPassColorProfile *)colorProfile;
-(UILabel *)labelLabel;
-(void)presentDiff:(id)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setColorProfile:(PKPassColorProfile *)arg1 ;
-(void)dealloc;
-(PKPassFieldTemplate *)fieldTemplate;
-(void)setFieldTemplate:(PKPassFieldTemplate *)arg1 ;
-(void)invalidateCachedFieldSize;
@end
