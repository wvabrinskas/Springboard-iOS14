/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HUNavigationButtonLayoutOptions;

@interface HUNavigationBarLayoutOptions : NSObject <NSCopying> {

	double _topMargin;
	double _bottomMargin;
	double _height;
	HUNavigationButtonLayoutOptions* _buttonLayoutOptions;
	long long _viewSizeSubclass;
	double _containerLeadingMargin;
	double _containerTrailingMargin;

}

@property (nonatomic,readonly) long long viewSizeSubclass;                                     //@synthesize viewSizeSubclass=_viewSizeSubclass - In the implementation block
@property (assign,nonatomic) double containerLeadingMargin;                                    //@synthesize containerLeadingMargin=_containerLeadingMargin - In the implementation block
@property (assign,nonatomic) double containerTrailingMargin;                                   //@synthesize containerTrailingMargin=_containerTrailingMargin - In the implementation block
@property (assign,nonatomic) double topMargin;                                                 //@synthesize topMargin=_topMargin - In the implementation block
@property (assign,nonatomic) double bottomMargin;                                              //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double height;                                                    //@synthesize height=_height - In the implementation block
@property (nonatomic,copy) HUNavigationButtonLayoutOptions * buttonLayoutOptions;              //@synthesize buttonLayoutOptions=_buttonLayoutOptions - In the implementation block
@property (nonatomic,readonly) double leadingMargin; 
@property (nonatomic,readonly) double trailingMargin; 
+(id)defaultOptionsForViewSizeSubclass:(long long)arg1 containerLeadingMargin:(double)arg2 containerTrailingMargin:(double)arg3 ;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(double)topMargin;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)leadingMargin;
-(double)trailingMargin;
-(long long)viewSizeSubclass;
-(HUNavigationButtonLayoutOptions *)buttonLayoutOptions;
-(double)containerLeadingMargin;
-(double)containerTrailingMargin;
-(id)initWithViewSizeSubclass:(long long)arg1 ;
-(void)setContainerLeadingMargin:(double)arg1 ;
-(void)setContainerTrailingMargin:(double)arg1 ;
-(void)setButtonLayoutOptions:(HUNavigationButtonLayoutOptions *)arg1 ;
@end
