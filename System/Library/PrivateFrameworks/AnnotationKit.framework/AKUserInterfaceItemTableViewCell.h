/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/AKUserInterfaceItem.h>
#import <libobjc.A.dylib/AKLineWidthChooserUserInterfaceItem.h>
#import <libobjc.A.dylib/AKInkIsUpdatable.h>

@class UIImageView, NSString;

@interface AKUserInterfaceItemTableViewCell : UITableViewCell <AKUserInterfaceItem, AKLineWidthChooserUserInterfaceItem, AKInkIsUpdatable> {

	UIImageView* _imageView;
	double _lineWidth;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) double lineWidth;                      //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLineWidth:(double)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)lineWidth;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(BOOL)wantsInkUpdate;
@end
