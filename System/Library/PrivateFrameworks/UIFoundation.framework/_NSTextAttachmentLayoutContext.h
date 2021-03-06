/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSTextLocation;
#import <UIFoundation/UIFoundation-Structs.h>
@class NSDictionary, NSTextAttachment;

@interface _NSTextAttachmentLayoutContext : NSObject {

	id<NSTextLocation> _location;
	NSDictionary* _attributes;
	NSTextAttachment* _textAttachment;
	CTRunDelegateRef _runDelegate;
	CGRect _bounds;
	CGRect _proposedLineFragment;
	BOOL _isBoundsValid;
	BOOL _isLineFragmentLayout;

}

@property (readonly) id<NSTextLocation> location;                     //@synthesize location=_location - In the implementation block
@property (copy,readonly) NSDictionary * attributes;                  //@synthesize attributes=_attributes - In the implementation block
@property (readonly) NSTextAttachment * textAttachment;               //@synthesize textAttachment=_textAttachment - In the implementation block
@property (readonly) const CTRunDelegateRef runDelegate; 
@property (assign) CGRect proposedLineFragment; 
-(id<NSTextLocation>)location;
-(const CTRunDelegateRef)runDelegate;
-(id)initWithLocation:(id)arg1 attributes:(id)arg2 ;
-(void)_queryLayout;
-(CGRect)proposedLineFragment;
-(void)setProposedLineFragment:(CGRect)arg1 ;
-(NSTextAttachment *)textAttachment;
-(NSDictionary *)attributes;
-(void)dealloc;
@end

