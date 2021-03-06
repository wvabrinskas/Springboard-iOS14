/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PXTitleSubtitleLabelSpec;

@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying> {

	NSString* _title;
	NSString* _subtitle;
	PXTitleSubtitleLabelSpec* _spec;

}

@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) PXTitleSubtitleLabelSpec * spec;              //@synthesize spec=_spec - In the implementation block
-(unsigned long long)hash;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(PXTitleSubtitleLabelSpec *)spec;
-(void)setSpec:(PXTitleSubtitleLabelSpec *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

