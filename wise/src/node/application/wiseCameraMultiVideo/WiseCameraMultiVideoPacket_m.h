//
// Generated file, do not edit! Created by nedtool 5.0 from wise/src/node/application/wiseCameraMultiVideo/WiseCameraMultiVideoPacket.msg.
//

#ifndef __WISECAMERAMULTIVIDEOPACKET_M_H
#define __WISECAMERAMULTIVIDEOPACKET_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0500
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



// cplusplus {{
	#include "WiseApplicationPacket_m.h"	
// }}

/**
 * Class generated from <tt>wise/src/node/application/wiseCameraMultiVideo/WiseCameraMultiVideoPacket.msg:18</tt> by nedtool.
 * <pre>
 * packet WiseCameraMultiVideoPacket extends WiseApplicationPacket
 * {
 *     unsigned long iterationStep;
 *     unsigned int TypeNeighbour; //already defined in WiseSimplePeriodicTrackerMessage
 * 
 * 	//unsigned long trackingCount;  //already defined in WiseSimplePeriodicTrackerMessage	
 * 	//unsigned int targetID; //already defined in WiseSimplePeriodicTrackerMessage
 * 	//double positionX; //already defined in WiseSimplePeriodicTrackerMessage
 * 	//double positionY; //already defined in WiseSimplePeriodicTrackerMessage
 * 
 * 	//double Vx; 	// x-velocity of the target
 * 	//double Vy;	// y-velocity of the target	
 * 	//cv::Mat IF_u; // information vector of the target estimation by the node
 * 	//cv::Mat frame; // information matrix of the target estimation by the node
 * }
 * </pre>
 */
class WiseCameraMultiVideoPacket : public ::WiseApplicationPacket
{
  protected:
    unsigned long iterationStep;
    unsigned int TypeNeighbour;

  private:
    void copy(const WiseCameraMultiVideoPacket& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const WiseCameraMultiVideoPacket&);

  public:
    WiseCameraMultiVideoPacket(const char *name=nullptr, int kind=0);
    WiseCameraMultiVideoPacket(const WiseCameraMultiVideoPacket& other);
    virtual ~WiseCameraMultiVideoPacket();
    WiseCameraMultiVideoPacket& operator=(const WiseCameraMultiVideoPacket& other);
    virtual WiseCameraMultiVideoPacket *dup() const {return new WiseCameraMultiVideoPacket(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b);

    // field getter/setter methods
    virtual unsigned long getIterationStep() const;
    virtual void setIterationStep(unsigned long iterationStep);
    virtual unsigned int getTypeNeighbour() const;
    virtual void setTypeNeighbour(unsigned int TypeNeighbour);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const WiseCameraMultiVideoPacket& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, WiseCameraMultiVideoPacket& obj) {obj.parsimUnpack(b);}


#endif // ifndef __WISECAMERAMULTIVIDEOPACKET_M_H
