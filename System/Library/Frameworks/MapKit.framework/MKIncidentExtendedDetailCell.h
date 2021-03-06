/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>
#import <UIKit/UITextViewDelegate.h>

@class UIStackView, UIImageView, NSString;

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {

	UIStackView* _stackView;
	UIImageView* _imageView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_setConstraints;
-(id)aggregatedDetailsFor:(id)arg1 ;
-(id)customBodyTextView;
-(void)configureWithIncident:(id)arg1 ;
-(void)configureWithNotice:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

