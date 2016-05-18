//
//  PGQParserFile.h
//  H264DecodingDemoPGQ
//
//  Created by Lois_pan on 16/5/18.
//  Copyright © 2016年 Lois_pan. All rights reserved.
//

#import <Foundation/Foundation.h>
@interface VideoPacket : NSObject

@property uint8_t * buffer;
@property NSInteger size;

@end


@interface PGQParserFile : NSObject

- (BOOL)open:(NSString *)fileName;

- (VideoPacket *)nextPacket;

- (void)close;

@end
