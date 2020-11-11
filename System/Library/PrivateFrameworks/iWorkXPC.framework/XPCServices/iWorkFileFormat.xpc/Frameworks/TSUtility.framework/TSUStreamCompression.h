/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSUtility/TSUtility-Structs.h>
@interface TSUStreamCompression : NSObject {

	int _status;
	SCD_Struct_TS60* _stream;
	int _operation;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;              //@synthesize handler=_handler - In the implementation block
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(BOOL)processBytes:(char*)arg1 size:(unsigned long long)arg2 flags:(int)arg3 ;
-(void)dealloc;
-(BOOL)didFinishProcessing;
-(id)initWithAlgorithm:(int)arg1 operation:(int)arg2 ;
@end
