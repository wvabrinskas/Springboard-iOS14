/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MKTransitInfoPreload.h>
@class NSAttributedString;


@protocol MKTransitInfoPreload <NSObject>
@property (nonatomic,readonly) NSAttributedString * attributedString; 
@required
-(NSAttributedString *)attributedString;

@end


@class NSAttributedString, NSString;

@interface MKTransitInfoPreload : NSObject <MKTransitInfoPreload> {

	NSAttributedString* _attributedString;

}

@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
@end
