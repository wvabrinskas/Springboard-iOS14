/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface EspressoDataFrameMappedFile : NSObject {

	int file_id;
	unsigned long long length;
	NSString* _path;
	char* _basePtr;

}

@property (retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign) char* basePtr;                //@synthesize basePtr=_basePtr - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(char*)basePtr;
-(void)setBasePtr:(char*)arg1 ;
-(NSString *)path;
-(void)dealloc;
@end

