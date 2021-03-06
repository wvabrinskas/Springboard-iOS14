/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface TVPContentKeyRequestParams : NSObject {

	NSString* _keyIdentifier;
	NSArray* _keyFormatVersions;

}

@property (nonatomic,retain) NSString * keyIdentifier;                 //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * keyFormatVersions;              //@synthesize keyFormatVersions=_keyFormatVersions - In the implementation block
-(NSArray *)keyFormatVersions;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(NSString *)keyIdentifier;
-(void)setKeyFormatVersions:(NSArray *)arg1 ;
@end

