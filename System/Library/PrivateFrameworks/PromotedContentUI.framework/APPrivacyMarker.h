/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PromotedContentUI.framework/PromotedContentUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PromotedContentUI/PromotedContentUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/APPCVisibilityIgnorable.h>

@interface APPrivacyMarker : UIButton <APPCVisibilityIgnorable> {

	 titleLabelRegularFontSize;
	 markerLabel;
	 markerView;
	 privacyMarkerType;
	 privacyMarkerPosition;
	 minimumTappableSize;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)sizeCategoryChanged:(id)arg1 ;
-(void)systemColorStatusChanged:(id)arg1 ;
@end

