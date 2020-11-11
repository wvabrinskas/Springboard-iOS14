/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGGridLayout.h>
#import <libobjc.A.dylib/PXGStringSource.h>

@class NSArray, NSDictionary, NSString;

@interface PXGPPTStringsLayout : PXGGridLayout <PXGStringSource> {

	NSArray* _strings;
	NSDictionary* _attributes;

}

@property (nonatomic,copy) NSArray * strings;                       //@synthesize strings=_strings - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;               //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)stringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)init;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(long long)verticalAlignmentForStringAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)initWithStringCount:(unsigned long long)arg1 localeCodes:(id)arg2 ;
-(NSArray *)strings;
-(id)attributedStringForSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(id)stringAttributesAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSDictionary *)attributes;
@end
